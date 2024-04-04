import cfd
import fire

def main(dt=0.1):
    grid = cfd.Grid(100, 100, init=True)
    # grid.show_grid()
    solver = cfd.Solver(dt, 500, grid, plot_interval=2)
    grids = solver.run_simulation()
    # grid.animate_grids(grids)



if __name__ == "__main__":
    fire.Fire(main)
